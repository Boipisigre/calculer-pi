# Calculer des décimales de π

Un exemple de calcul permettant de comprendre les différences de temps d'éxécution entre un programme écrit dans un langage interprété et un en langage compilé.

Dans une première version, issue du [travail](https://github.com/sarmadgulzar/calculate-pi-python-vs-rust) de [Sarmad Gulzar](https://github.com/sarmadgulzar), les langages utilisés sont **Python** et **Rust**

Vous pouvez [visionner](https://www.youtube.com/watch?v=4nOdO4SDdO0) sa vidéo sur le sujet.

## Les méthodes de calcul utilisées
L'objectif est de calculer pour chaque méthode en python et rust les dix premières décimales de π

* 3,1415926535

### Leibniz-gregory
Sarmad Gulzar utilise la formule de **Leibniz-gregory** utilisant la fonction arctan pour calculer π

$$ π = 4 \sum_{k=0}^n \frac {(-1)^n} {(2n+1)} $$


Cette méthode est peu efficace et demande beaucoup de calcul  toutefois elle est bien pour le benchmark.

Si on veut n décimales de π, avec une erreur inférieur ou égale à    

$$ \frac {1}{10^n}$$  

Soit une valeur de

$$ N ​​\geq \frac {10^n -3} {2} $$
