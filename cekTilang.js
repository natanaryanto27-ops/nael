const readline = require('readline');

function cekTilang(plat, tanggal) {
    if ((plat % 2 === 0 && tanggal % 2 === 0) || (plat % 2 !== 0 && tanggal % 2 !== 0)) {
        return "AMAN";
    } else {
        return "TILANG";
    }
}

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

console.log("=== PROGRAM CEK TILANG ===");
rl.question("Masukkan nomor plat   : ", (platInput) => {
    rl.question("Masukkan tanggal hari ini: ", (tanggalInput) => {
        const plat = parseInt(platInput);
        const tanggal = parseInt(tanggalInput);
        
        const hasil = cekTilang(plat, tanggal);
        console.log(`Hasil pemeriksaan       : ${hasil}`);
        rl.close();
    });
});
