
## Praca domowa 2

Zaimplementuj klasę, reprezentującą pojedyncze rozdanie w brydżu sportowym.
Zaprojektuj i zaimplementuj typy pomocne przy przechowywaniu informacji
(*Card*? *Contract*? *Player*? *Vulnerable*? Inne?). Zadbaj o kontrolę
prawidłowości wprowadzanych danych, np. uniemożliwienie dwukrotnego
wprowadzenia tej samej karty.


```
class Board {
    // Players:
    northCards[13];
    southCards[13];
    westCards[13];
    eastCards[13];

    Board(); // randomly distributes cards and vulnerability
    Board(northCards, southCards, westCards, eastCards, vulnerable);

    vulnerable; // NS, EW, both or none, PL: założenia, przed partią, po partii
    contract; // [1], PL: kontrakt
    declarer; // [2], PL: rozgrywający
    tricksTaken; // PL: liczba wziętych lew

    auction(declarer, contract); // setter for two fields at once
    play(tricksTaken); // basically setter
    score(); // based on contract and number of taken tricks [3], PL: zapis
}
```

Ocenie, w skali 0-2, będzie podlegać przede wszystkim kod, niekoniecznie
zgodność merytoryczna, ale nie może być zbyt prosto ;)

Mailem przesyłamy **wyłącznie kod źródłowy** (.cpp) rozwiązania; ostateczny
termin przesyłania prac to 11.2.2024.


Linki:
1. https://en.wikipedia.org/wiki/Contract_bridge#Auction
2. https://en.wikipedia.org/wiki/Contract_bridge#Play
3. https://pl.wikipedia.org/wiki/Zapis_bryd%C5%BCowy#Zapis_mi%C4%99dzynarodowy
4. https://www.bridgebase.com/client/web0.php
