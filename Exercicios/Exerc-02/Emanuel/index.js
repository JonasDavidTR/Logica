/**
 * 2. Dado o tamanho do lado de um quadrado, calcular a área e o perímetro do mesmo
*/

function area(lado = 5) {
    return lado ** 2
}

function perimetro(lado) {
    return 4 * lado
}

console.log("Área:", area())
console.log("Perímetro:", perimetro(5))