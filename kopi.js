const readline = require('readline');

function hitungKopi(jumlahGelas) {
    let total = jumlahGelas * 5000;
    if (jumlahGelas > 3) {
        total -= 2000;
    }
    return total;
}

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

console.log("=== PROGRAM HITUNG KOPI ===");
rl.question("Masukkan jumlah gelas kopi yang dibeli: ", (inputGelas) => {
    const gelas = parseInt(inputGelas);
    const totalBayar = hitungKopi(gelas);
    
    console.log(`Total harga yang harus dibayar       : Rp ${totalBayar}`);
    rl.close();
});
