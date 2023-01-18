function printPage() {
    var ibPrint = document.getElementById('ibPrint');
    if (ibPrint != null) {
        ibPrint.click();
    }
    else {
        window.print();
    }
}