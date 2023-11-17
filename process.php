<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="utf-8">
        <meta name="author" content="Sam Will and Elizabeth Lembach">
        <title>Pass The Word</title>
        <meta name="description" content="This page is to use C++ to get and analyze data the strength of a password.">
        <link href="style.css" rel="stylesheet" type="text/css" media="screen" />
    </head>
    <body>
    	<header>
    		<h1>CS 2300</h1>
            <h2>Password Strength</h2>
    	</header>

        <?php

        $txtPassword = $_POST["txtPassword"];
        echo "Your password is: " . $txtPassword;

        // Create a folder for the user where the processing will take place. It will be named a random number (so that it's different for each submission).
        $rand_number = rand();
        while (file_exists($rand_number)) {
            $rand_number = rand();
        }
        $command_mkdir = escapeshellcmd("mkdir " . $rand_number);
        $output_mkdir = shell_exec($command_mkdir);

        // Copy the files into the folder.
        //$output_cp = shell_exec("cp Validation* " . $rand_number);
        $command_cp2 = escapeshellcmd("cp password_validation.cpp " . $rand_number);
        $output_cp2 = shell_exec($command_cp2);
        $output = shell_exec("cd " . $rand_number . ";g++ -std=c++1y -o password_validation.exe password_validation.cpp;./password_validation.exe " . $txtPassword . ";cd ..");

        // Print the output from the C++ program to the webpage.
        echo $output;

        // Delete the folder
        array_map("unlink", glob($rand_number . "/*"));
        rmdir($rand_number);

        // Doing this again but for the password strength
        while (file_exists($rand_number)) {
            $rand_number = rand();
        }
        $command_mkdir = escapeshellcmd("mkdir " . $rand_number);
        $output_mkdir = shell_exec($command_mkdir);

        // Copy the files into the folder.
        //$output_cp = shell_exec("cp Validation* " . $rand_number);
        $command_cp2 = escapeshellcmd("cp password_strength.cpp " . $rand_number);
        $output_cp2 = shell_exec($command_cp2);
        $output = shell_exec("cd " . $rand_number . ";g++ -std=c++1y -o password_strength.exe password_strength.cpp;./password_strength.exe " . $txtPassword . ";cd ..");

        // Print the output from the C++ program to the webpage.
        echo $output;

        // Delete the folder
        array_map("unlink", glob($rand_number . "/*"));
        rmdir($rand_number);

        // $command = escapeshellcmd('/usr/custom/OE_engine.py');
        // $ouput = shell_exec($command);
        // echo $output;
        echo "<img src=\"graph.png\" alt=\"Graph Image\">"

        ?>

    </body>
</html>
