# Calculer des décimales de π

Un exemple de calcul permettant de comprendre les différences de temps d'éxécution entre un programme écrit dans un langage interprété et un en langage compilé.

Dans une première version, issue du [travail](https://github.com/sarmadgulzar/calculate-pi-python-vs-rust) de [Sarmad Gulzar](https://github.com/sarmadgulzar), les langages utilisés sont **Python** et **Rust**

Vous pouvez [visionner](https://www.youtube.com/watch?v=4nOdO4SDdO0) sa vidéo sur le sujet.

## Les méthodes de calcul utilisées
L'objectif est de calculer pour chaque méthode en python et rust les dix premières décimales de π

* 3,1415926535

### Leibniz-gregory
Sarmad Gulzar utilise la formule de **Leibniz-gregory** utilisant la fonction arctan pour calculer π

$$ π = 4 \sum_{k=0}^n \frac {(-1)^k} {(2k+1)} $$


Cette méthode est peu efficace et demande beaucoup de calcul  toutefois elle est bien pour le benchmark.

Si on veut n décimales de π, avec une erreur inférieur ou égale à    

$$ \frac {1}{10^n}$$  

Soit une valeur de

$$ N ​​\geq \frac {10^n -3} {2} $$

Pour 1 milliard d'itération nous obtenons PI avec 9 décimales en 7.92 secondes en rust et 112.76 en python

### BBP (Bailey-Borwein-Plouffe)
la formule est plus compliquée est implique de pouvoir utiliser des grands nombres .

$$ π = \sum_{i=0}^n \frac {1} {16^i} (\frac {4} {8i + 1} - \frac {2} {8i + 4} - \frac {1} {8i + 5} - \frac {1} {8i + 5} )$$

Cette méthode est trés efficace et présente d'autres difficultés et limitations

#### efficacité
En python on calcule 15 décimales de π en 35 μs  
En rust on calcule 11 décimales de π en 5 μs

#### limitations
En python on ne pas obtenir plus de 15 décimales  à cause des limitations des représentations mémoires des nombres.

En Rust on peut pas obtenir plus de car 16 ^ 9 donne un dépassement de capacité de la fonction **pow**

Dans le tableur cal de libreoffice   
*  on ne peut pas calculer la valeur de PI par la méthode de Leibniz-gregory.
* On peut calculer PI avec 14 décimales par la méthode BBP

on trouve sur le net des applications calculants des décimales de pi en voici [une](https://calculatrices.app/calculatrice-de-precision-pi)
