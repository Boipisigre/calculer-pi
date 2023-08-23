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


Cette méthode est peu efficace et demande beaucoup de calcul toutefois elle est bien pour un benchmark pour mesurer l'efficacité des languages compilés par rapport aux languages interprétés.

Si on veut n décimales de π, avec une erreur inférieur ou égale à    

$$ \frac {1}{10^n}$$  

Soit une valeur de

$$ N ​​\geq \frac {10^n -3} {2} $$

Pour 1 milliard d'itération nous obtenons PI avec 9 décimales en 7.92 secondes en rust et 112.76 en python

la version C standard donne pour 100000000 d'itération 8 décimales en 5 secondes


### BBP (Bailey-Borwein-Plouffe)
la formule est plus compliquée est implique de pouvoir utiliser des grands nombres .

$$ π = \sum_{i=0}^n \frac {1} {16^i} (\frac {4} {8i + 1} - \frac {2} {8i + 4} - \frac {1} {8i + 5} - \frac {1} {8i + 5} )$$

Cette méthode est trés efficace et présente d'autres difficultés et limitations

#### efficacité
En python on calcule 15 décimales de π en 35 μs  
En rust on calcule 11 décimales de π en 5 μs
En C on calcule 18 décimales de π en 2 μs

#### limitations
En python on ne pas obtenir plus de 15 décimales  à cause des limitations des représentations mémoires des nombres.

En Rust on peut pas obtenir plus de car 16 ^ 9 donne un dépassement de capacité de la fonction **pow**

Dans le tableur cal de libreoffice   
*  on ne peut pas calculer la valeur de PI par la méthode de Leibniz-gregory.
* On peut calculer PI avec 14 décimales par la méthode BBP

on trouve sur le net des applications calculants des décimales de pi en voici [une](https://calculatrices.app/calculatrice-de-precision-pi)

**TODO** : écrire la version avec GMP

### Formule de chudnovsky
La plus évolué https://en.wikipedia.org/wiki/Chudnovsky_algorithm

$$ \frac{1}{\pi} = 12 \sum^\infty_{q=0} \frac{(-1)^q (6q)! (545140134q + 13591409)}{(3q)!(q!)^3 \left(640320\right)^{3q + \frac32}}  $$

Ce [code](https://beej.us/blog/data/pi-chudnovsky-gmp/chudnovsky_c.txt) implémentant en C avec la librairie **gmp** donne sur mon ordinateur portable moins de 50s secondes pour calculer 100000 décimales.


### Calcul de PI par la formule Arctan

 $$ π = 6*arctan(\frac {1} {\sqrt(3)}) $$

En Rust cette formule donne 39 décimales de     π = **3.1415926535 8979323846 2643383279 502884197**   
En Python le même calcul donne 15 décimales de  π = **3.1415926535 89793** 5   
En javascript le  calcul donne 15 décimales de  π = **3.1415926535 89793** 6   
En C avec gmp : à faire

## Références :

Le site pour tout connaitre de [PI](http://pi314.net/fr/index.php)
Des formules pour [calculer PI](http://www.gecif.net/articles/mathematiques/pi/)

[1 Milliard de décimales](http://www.gecif.net/articles/mathematiques/pi/pi_decimales.html)

Les 50 premières décimales **Pi = 3.1415926535 8979323846 2643383279 5028841971 6939937510**

Une utilisation de la [librairie gmp](https://beej.us/blog/data/pi-chudnovsky-gmp/) pour le calcul.

les [TP](http://thalesm.hmalherbe.fr/gestclasse/documents/Terminale_NSI/2021-2022/TP/Activite_Decimales_Nombre_PI/Activite_Calcul_des_decimales_du_nombre_PI.html) de terminale NSI sur le sujet.
