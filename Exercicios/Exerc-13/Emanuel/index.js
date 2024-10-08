// 13. Calcular a resistência equivalente de um circuito composto por três resistências.

const resistencias = [5, 25, 30]

function reqParalelo([r1, r2, r3]) {
    let req = 1 / r1 + 1 / r2 + 1 / r3
    let result = 1 / req
    return result
}

function reqSerie([r1, r2, r3]) {
    let req = r1 + r2 + r3
    return req
}

console.log(reqParalelo(resistencias))
console.log(reqSerie(resistencias))