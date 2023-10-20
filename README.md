ShellExecuteRedirect demuestra cómo ejecutar comandos en una shell Unix desde una aplicación de consola C#. El programa utiliza la clase `Process` de la biblioteca estándar de .NET para configurar y ejecutar comandos de shell en un sistema Unix.

## Requisitos

- .NET Core o .NET Framework instalado en tu sistema.
- Sistema Unix/Linux para ejecutar comandos.

## Uso

- Clona o descarga este repositorio en tu máquina local.
- Modifica la variable `comando` en el código para ejecutar el comando que desees en la shell Unix.
- Compila el programa utilizando `mcs`:
- bash:`mcs Program.cs`.
- mono:`mono Program.exe`.

El programa ejecutará el comando especificado en la shell Unix y mostrará la salida en la consola de la aplicación.

## Configuración

Ajusta las opciones de configuración según sea necesario en la variable processStartInfo.

## Nota
- Este código "Basico modificable" lo comparto solo con fines educativos y de demostración. Asegúrate de usarlo de manera ética y en entornos autorizados.
