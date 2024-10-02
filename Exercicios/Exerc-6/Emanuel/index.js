/**
 * 6. Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles.
 */

function resto(num1, num2) {
    let quociente = num1 / num2
    let resto = num1 % num2
    return console.log(quociente, resto)
}

resto(5, 5)