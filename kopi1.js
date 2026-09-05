
function hitungTabungan(hari) {
    let total = 0;
    for (let i = 1; i <= hari; i++) {
        if (i % 2 !== 0) {
            total += 2000;
        } else {
            total += 5000; 
        }
    }
    return total;
}

console.log(hitungTabungan(3)); // 
