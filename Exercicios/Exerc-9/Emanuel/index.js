// Calcular volume de uma lata de óleo, dado seu raio e sua altura.
// V = PI * Raio^2 * altura

const pi = 3.14

function calcVolume(raio, altura) {
    let volumeResult = pi * (raio ** 2) * altura
    return console.log(volumeResult)
}

calcVolume(4, 4)
