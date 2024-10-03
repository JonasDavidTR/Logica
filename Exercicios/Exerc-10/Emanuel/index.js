// 10. Converter um inteiro menor que 32 para sua representação em binário.

function inteiroParaBinario(num) {
    let binario = ""
    while (num > 0) {
        let resto = num % 2
        binario = resto + binario
        num = (num - resto) / 2
    }
    return binario || "0"
}

let numero = 18
console.log(inteiroParaBinario(numero))