// 11. Calcular a média aritmética entre duas notas bimestrais de um aluno.

function mediaBimestral(n1, n2) {
    if (typeof n1 === 'number' && typeof n2 === 'number') {
        let media = (n1 + n2) / 2
        return console.log(media)
    }
    return console.log('Dado inserido é inválido!')
}

mediaBimestral(10, 6)