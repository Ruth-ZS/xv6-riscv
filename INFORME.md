# Ejecución de xv6

Este informe describe los pasos seguidos para instalar y ejecutar xv6 en 
un sistema macOS, así como los problemas encontrados y sus soluciones.

## Pasos seguidos para instalar xv6

- Instalé Homebrew porque facilita la instalación de QEMU y el toolchain 
de RISC-V, que son necesarios para compilar y ejecutar xv6.
- Instalé QEMU con el comando: `brew install qemu`.
- Instalé el toolchain con el comando: `brew tap riscv/riscv && brew 
install riscv-tools`.
- Cloné el repositorio con: `git clone 
https://github.com/Ruth-ZS/xv6-riscv.git`.
- Creé una nueva rama con: `git checkout -b ruth_zanabria_t0`.
- Compilé el proyecto con el comando: `make`.
- Ejecuté el sistema con: `make qemu`.
- Ejecuté algunos comandos para verificar la instalación:
  - `ls`
  - `echo "Hola xv6"`
  - `cat README`

## Problemas encontrados y soluciones

- **Error al intentar instalar riscv-tools debido a su ubicación en 
distintas carpetas.**
  - **Solución:** Usando el comando `brew install 
riscv-software-src/riscv/riscv-gnu-toolchain` para especificar la 
ubicación concreta del toolchain.

- **Los procesos de instalación eran lentos.**
  - **Solución:** Intenté cancelar el proceso en la terminal y reiniciar 
la instalación.

- **Al ejecutar `make qemu`, aparecía el error "exec make failed".**
  - **Solución:** Reinicié el proceso y verifiqué que todas las 
herramientas necesarias estuvieran instaladas correctamente.

- **El proceso de instalación del toolchain tardaba mucho.**
  - **Solución:** Busqué una alternativa como Homebrew para acelerar la 
instalación.

La instalación y ejecución de xv6 fue exitosa después de resolver los 
problemas encontrados. Homebrew facilitó el proceso de instalación del 
toolchain y QEMU, y se realizaron varias pruebas durante el proceso para 
asegurar que todo funcionara correctamente.

