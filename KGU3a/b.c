// In welcher Situation unterscheiden sich Algorithmus A und B? Welcher Algorithmus erscheint Ihnen zweckmäßiger?

// Algorithmus A: +++++
if (Ampel_funktioniert())
if ((Ampel == rot) || (Ampel == gelb)) bleib_stehen(); else fahre();
//
if (Ampel_funktioniert()) {
    if ((Ampel == rot) || (Ampel == gelb)){
        bleib_stehen();
    } else{
        fahre();
    }
}

// Algorithmus B:
if (Ampel_funktioniert()){
if ((Ampel == rot) || (Ampel == gelb)) bleib_stehen();} else fahre();
//
if (Ampel_funktioniert()){
    if ((Ampel == rot) || (Ampel == gelb)){
        bleib_stehen();
    }
} else{
    fahre();
}

