using System;
using System.Diagnostics;

class Program
{
    static void Main()
    {
        // Comando que deseas ejecutar (por ejemplo, "ls -l") // Command you want to execute (e.g., "ls -l")
        string comando = "ls -l";

        // Opciones para configurar el proceso // Options for configuring the process
        var processStartInfo = new ProcessStartInfo
        {
            FileName = "/bin/bash", // Shell de Unix // Unix Shell
            RedirectStandardInput = true,
            RedirectStandardOutput = true,
            RedirectStandardError = true,
            UseShellExecute = false, // Modifica a 'false' para redirigir la entrada y salida // Change to 'false' to redirect input and output
            CreateNoWindow = true,
            WorkingDirectory = "/home" // Directorio en el que deseas ejecutar el comando // Directory in which you want to run the command
        };

        using (var process = new Process())
        {
            process.StartInfo = processStartInfo;

            // Inicia el proceso de la shell de Unix // Starts the Unix shell process
            process.Start();

            // Escribe el comando en la entrada estándar del proceso // Write the command in the standard input of the process
            process.StandardInput.WriteLine(comando);

            // Cierra la entrada estándar para indicar que no se esperan más entradas // Closes the standard input to indicate that no further input is expected.
            process.StandardInput.Close();

            // Lee la salida estándar y los errores // Reads standard output and errors
            string output = process.StandardOutput.ReadToEnd();
            string error = process.StandardError.ReadToEnd();

            // Espera a que el proceso termine // Wait for the process to finish
            process.WaitForExit();

            if (process.ExitCode == 0)
            {
                Console.WriteLine("Resultado:");
                Console.WriteLine(output);
            }
            else
            {
                Console.WriteLine($"Error al ejecutar el comando: {error}");
            }
        }
    }
}
