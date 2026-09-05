const readline = require('readline');

function tepokNyamuk(jumlah) {
    for (let i = 1; i <= jumlah; i++) {
        if (i % 3 === 0) {
            console.log("TEPOK");
        } else {
            console.log(i);
        }
    }
}

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

console.log("=== PROGRAM TEPOK NYAMUK ===");
rl.question("Masukkan jumlah perulangan: ", (inputJumlah) => {
    const jumlah = parseInt(inputJumlah);
    
    console.log("\n--- Output ---");
    tepokNyamuk(jumlah);
    rl.close();
});
