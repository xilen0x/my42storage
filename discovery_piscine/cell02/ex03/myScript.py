"""
castorga@car15s5 run % ./john  --format=raw-sha1 --wordlist=../../../my42storage/discovery_piscine/cell02/ex03/combined_dict.txt ../../../my42storage/discovery_piscine/cell02/ex03/hash.txt > resultado.txt

"""


words = ["liam", "42", "barcelona", "up2u", "1978", "lion", "spain", "hacking"]
combined_words = []

# Combina palabras
for i in range(len(words)):
    for j in range(i+1, len(words)):
        combined_words.append(words[i] + words[j])
        combined_words.append(words[j] + words[i])

# Guarda las palabras combinadas en un archivo
with open("combined_dict.txt", "w") as file:
    for word in combined_words:
        file.write(word + "\n")


"""
castorga@car15s5 run % ./john  --format=raw-sha1 --wordlist=../../../my42storage/discovery_piscine/cell02/ex03/combined_dict.txt ../../../my42storage/discovery_piscine/cell02/ex03/hash.txt > resultado.txt
Using default input encoding: UTF-8
Press 'q' or Ctrl-C to abort, 'h' for help, almost any other key for status
1g 0:00:00:00 DONE (2023-06-21 16:04) 100.0g/s 1600p/s 1600c/s 1600C/s liam42..barcelona42
Use the "--show --format=Raw-SHA1" options to display all of the cracked passwords reliably
Session completed.
castorga@car15s5 run % cat resultado.txt
Loaded 1 password hash (Raw-SHA1 [SHA1 256/256 AVX2 8x2])
liamup2u         (?)

"""
