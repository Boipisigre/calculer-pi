# Calculer des décimales de π

Un exemple de calcul permettant de comprendre les différences de temps d'éxécution entre un programme écrit dans un langage interprété et un en langage compilé.

Dans une première version, issue du [travail](https://github.com/sarmadgulzar/calculate-pi-python-vs-rust) de [Sarmad Gulzar](https://github.com/sarmadgulzar), les langages utilisés sont **Python** et **Rust**

Vous pouvez [visionner](https://www.youtube.com/watch?v=4nOdO4SDdO0) sa vidéo sur le sujet.

## Les méthodes de calcul utilisées 

### Leibniz-gregory
Sarmad Gulzar utilise la formule de **Leibniz-gregory** utilisant la fonction arctan
      π=4n=0∑+∞​2n+1(−1)n​​

Cette méthode est peu efficace et demande beaucoup de calcul , mais bien pour le benchmark. 

