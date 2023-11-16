# calc

## Pasos Github Flow
1. Clona el repo de Github a tu computadora:
```bash
git clone https://github.com/cetisquigletr/calc
```
2. Crea la rama donde haras cambios:
```bash
git branch "nombre-rama"
```
3. Cambiate a la nueva rama:
```bash
git checkout "nombre-rama"
```
4. Haz cambios a los archivos.
5. Agrega los archivos cambiados al siguiente commit:
```bash
git add "nombre-archivo"
```
6. Haz el commit:
```bash
git commit -m "mensaje"
```
7. Empuja la rama a Github:
```bash
git push -u origin "nombre-rama"
```
8. Crea el Pull Request [en Github](https://docs.github.com/es/pull-requests/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/creating-a-pull-request#creating-the-pull-request).
9. (Opcional) Resuelve conflictos merge si los hay. [En Github](https://docs.github.com/es/pull-requests/collaborating-with-pull-requests/addressing-merge-conflicts/resolving-a-merge-conflict-on-github) o en [Git Bash](https://docs.github.com/es/pull-requests/collaborating-with-pull-requests/addressing-merge-conflicts/resolving-a-merge-conflict-using-the-command-line?platform=windows).
10. Espera a que acepten el Pull Request.
11. Devuelvete a la rama principal (puede ser main o master u otra):
```bash
git checkout main
```
12. Jala los cambios recientes a la rama principal a tu repo local:
```bash
git pull
```
13. Repite desde el paso 2

## Github Flow graficamente
![Github Flow](https://user-images.githubusercontent.com/6351798/48032310-63842400-e114-11e8-8db0-06dc0504dcb5.png)