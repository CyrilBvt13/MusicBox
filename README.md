# MusicBox

***Attention ce projet est sous licence d'utilisation privée. Ce projet et tout son contenu (code, documentation, fichiers, etc.) sont la propriété exclusive de CyrilBvt13. Tous les droits, y compris les droits d'auteur, sont réservés par CyrilBvt13.***

## Schéma électronique :

Il y a 5 boutons :
- musique précédente
- play/pause
- musique suivante
- volume +
- volume -

Chaque bouton poussoir est relié au V+ et au GND via une résistance pull-up de 10k ohm. Lorsque le bouton est appuyé il transmet un signal positif à une pin de l'Arduino.

Le TX de l'Arduino est relié au RX de la carte DY-SV5W et inversement.

Le haut-parleur est branché directement sur la carte DY-SV5W sur les pins correspondantes.

![MusicPlayer-Circuit](https://github.com/user-attachments/assets/a907e579-9a7c-4cf4-a733-707012d8483d)

## Principe :

Vous pouvez déposer sur la carte SD introduite dans la carte DY-SV5W toutes les musiques souhaitées. Elles doivent être nommées 00001.mp3, 00002.mp3, ..., 0000N.mp3.

Le code permet de lire les musiques à partir de 00001.mp3, puis de les sélectionner grace aux boutons "musique précédente" et "musique suivante".

Vous pouvez controler le volume grace aux 2 boutons sur le coté.
