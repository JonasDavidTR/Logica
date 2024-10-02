/**
 * 3. Dado o tamanho do raio de uma circunferência, calcular a área e o perímetro da mesma.
 */

const pi = 3.14

// A=πr**2
function area(raio) {
    return console.log(pi * (raio ** 2))
}

// C=2πr
function perimetro(raio) {
    return console.log(2 * pi * raio)
}

area(5) //78.5 
perimetro(5) // 31.40