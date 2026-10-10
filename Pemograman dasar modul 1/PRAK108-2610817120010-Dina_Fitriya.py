import math

laps = 5
distance = 14
circumference = distance / laps
r = circumference / (2 * math.pi)

print("Diketahui :")
print(f"Pak Dengklek mengelilingi taman = {laps} Putaran")
print(f"Jarak tempuh Pak Dengklek = {distance} Kilometer\n")
print("Jawaban :")
print(f"Jari-jari taman yang dikelilingi Pak Dengklek adalah {r:.2f} Kilometer")