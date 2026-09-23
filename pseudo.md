# Pseudo code du programme

dy = distance route \
dx = distance rochers \
s1 = vitesse route \
s2 = vitesse rochers \
l1 = distace du premier segment sur la route \
l2 = distance du deuxième segment sur les rochers

1. définir les valeurs des constantes
2. demander la valeur l1 à l'utilisateur
3. vérifier la valeur de l'utilisateur, elle doit être un entier naturel non nul
    1. si faux redemander la valeur l1 à l'utilisateur
4. calculer l2 la distance entre la fin de la route et l'objet 
```math
\text{d1} = \sqrt{\text{dx}^2 + (\text{dx-l1})^2}
```
5. calculer t1 le temps sur la route $l1/s1$ 
6. calculer t2 le temps sur la partie rocheuse $l2/s2$
7. calculer t3 le temps total $t1 + t2$
8. afficher le temps total t3
