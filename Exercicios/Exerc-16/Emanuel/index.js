/**
 * 16. Inverter um número de três algarismos.
*/

function palindromo(valor) {
    const str = valor.toString();
    const invertida = str.split('').reverse().join('');
    return str === invertida;
}


console.log(palindromo(121));
console.log(palindromo('Ana'));
console.log(palindromo('321'));