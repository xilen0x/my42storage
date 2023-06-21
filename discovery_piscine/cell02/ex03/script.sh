#!/bin/bash
words=("liam" "42" "barcelona" "up2u" "1978" "lion" "spain" "hacking")
combined_words=()
# Combinar palabras
for ((i=0; i<${#words[@]}; i++)); do
    for ((j=i+1; j<${#words[@]}; j++)); do
        combined_words+=("${words[i]}${words[j]}")
        combined_words+=("${words[j]}${words[i]}")
    done
done
# Guardar las palabras combinadas en un archivo
for word in "${combined_words[@]}"; do
    echo "$word" >> combined_dict.txt
done
