function inputdata(){
  var n=document.forms['terlambat']['nama'].value;
  var e=document.forms['terlambat']['nim'].value;
  var p=document.forms['terlambat']['prodi'].value;
  var a=document.forms['terlambat']['angkatan'].value;  
  var i=document.forms['terlambat']['lokasi'].value;   
  var o=document.forms['terlambat']['alasan'].value;       
                                          
  var tabel = document.getElementById("databel");
  var baris = tabel.insertRow(1);
  var kol1 = baris.insertCell(0);
  var kol2 = baris.insertCell(1);
  var kol3 = baris.insertCell(2);
  var kol4 = baris.insertCell(3);
  var kol5 = baris.insertCell(4);
  var kol6 = baris.insertCell(5);
          
  kol1.innerHTML = n;
  kol2.innerHTML = e;
  kol3.innerHTML = p;
  kol4.innerHTML = a;
  kol5.innerHTML = i;
  kol6.innerHTML = o;
  
  var nama1 = document.getElementById("terlambat1").value;
  var nim1 = document.getElementById("terlambat2").value;
  var studi1 = document.getElementById("terlambat3").value;
  var studiop1 = document.getElementById("terlambat4").value;
  var tahun1 = document.getElementById("terlambat5").value;
  var tahunop1 = document.getElementById("terlambat6").value;
  var kantin1 = document.getElementById("terlambat7").value;
  var kantinop1 = document.getElementById("terlambat8").value;
  var alasan1 = document.getElementById("terlambat9").value;
  var counter=0;

  if(nama1 == ""){
    alert("Isi Nama Anda");
  }else{
    counter++;
  }
  if(nim1 == ""){
    alert("Isi NIM Anda");
  }else{
    counter++;
  }
  if(studi1 == studiop1){
    alert("Pilih Program Studi Anda");
  }else{
    counter++;
  }
  if(tahun1 == tahunop1){
    alert("Pilih Tahun Angkatan Anda");
  }else{
    counter++;
  }
  if(kantin1 == kantinop1){
    alert("Pilih Kantin Anda");
  }else{
    counter++;
  }
  if(alasan1 == ""){
    alert("Berikan Alasan Anda");
  }else{
    counter++;
  }
  if(counter == 6){
    alert("Request anda telah dikirimkan");
  }

}


  function inputdata1(){
    var n=document.forms['sakit']['nama'].value;
    var e=document.forms['sakit']['nim'].value;
    var p=document.forms['sakit']['prodi'].value;
    var a=document.forms['sakit']['angkatan'].value;  
    var i=document.forms['sakit']['lokasi'].value;   
    var d=document.forms['sakit']['sps'].value; 
    var o=document.forms['sakit']['antar'].value;         
                                            
    var tabel = document.getElementById("databel");
    var baris = tabel.insertRow(1);
    var kol1 = baris.insertCell(0);
    var kol2 = baris.insertCell(1);
    var kol3 = baris.insertCell(2);
    var kol4 = baris.insertCell(3);
    var kol5 = baris.insertCell(4);
    var kol6 = baris.insertCell(5);
    var kol7 = baris.insertCell(6);
            
    kol1.innerHTML = n;
    kol2.innerHTML = e;
    kol3.innerHTML = p;
    kol4.innerHTML = a;
    kol5.innerHTML = i;
    kol6.innerHTML = d;
    kol7.innerHTML = o;
    

    var nama2 = document.getElementById("sakit1").value;
    var nim2 = document.getElementById("sakit2").value;
    var studi2 = document.getElementById("sakit3").value;
    var studiop2 = document.getElementById("sakit4").value;
    var tahun2 = document.getElementById("sakit5").value;
    var tahunop2 = document.getElementById("sakit6").value;
    var kantin2 = document.getElementById("sakit7").value;
    var kantinop2 = document.getElementById("sakit8").value;
    var pengantar1 = document.getElementById("sakit9").value;
    var bukti2 = document.getElementById("sakit10").value;
    var counter=0;
  
    if(nama2 == ""){
      alert("Isi Nama Anda");
    }else{
      counter++;
    }
    if(nim2 == ""){
      alert("Isi NIM Anda");
    }else{
      counter++;
    }
    if(studi2 == studiop2){
      alert("Pilih Program Studi Anda");
    }else{
      counter++;
    }
    if(tahun2 == tahunop2){
      alert("Pilih Tahun Angkatan Anda");
    }else{
      counter++;
    }
    if(kantin2 == kantinop2){
      alert("Pilih Kantin Anda");
    }else{
      counter++;
    }
    if(pengantar1 == ""){
      alert("Isi Nama Pengantar");
    }else{
      counter++;
    }
    if(bukti2 == ""){
        alert("Masukkan Surat Pernyataan Sakit");
    }else{
        counter++;
    }
    if(counter == 7){
      alert("Request anda telah dikirimkan");
    }
  
  }

  
function inputdata2() {
  var n=document.forms['alergi']['nama'].value;
  var e=document.forms['alergi']['nim'].value;
  var p=document.forms['alergi']['prodi'].value;
  var a=document.forms['alergi']['angkatan'].value;  
  var i=document.forms['alergi']['lokasi'].value;   
  var o=document.forms['alergi']['skd'].value;        
                                          
  var tabel = document.getElementById("databel");
  var baris = tabel.insertRow(1);
  var kol1 = baris.insertCell(0);
  var kol2 = baris.insertCell(1);
  var kol3 = baris.insertCell(2);
  var kol4 = baris.insertCell(3);
  var kol5 = baris.insertCell(4);
  var kol6 = baris.insertCell(5);
          
  kol1.innerHTML = n;
  kol2.innerHTML = e;
  kol3.innerHTML = p;
  kol4.innerHTML = a;
  kol5.innerHTML = i;
  kol6.innerHTML = o;

    var nama3 = document.getElementById("alergi1").value;
    var nim3 = document.getElementById("alergi2").value;
    var studi3 = document.getElementById("alergi3").value;
    var studiop3 = document.getElementById("alergi4").value;
    var tahun3 = document.getElementById("alergi5").value;
    var tahunop3 = document.getElementById("alergi6").value;
    var kantin3 = document.getElementById("alergi7").value;
    var kantinop3 = document.getElementById("alergi8").value;
    var bukti3 = document.getElementById("alergi9").value;
    var counter=0;
  
    if(nama3 == ""){
      alert("Isi Nama Anda");
    }else{
      counter++;
    }
    if(nim3 == ""){
      alert("Isi NIM Anda");
    }else{
      counter++;
    }
    if(studi3 == studiop3){
      alert("Pilih Program Studi Anda");
    }else{
      counter++;
    }
    if(tahun3 == tahunop3){
      alert("Pilih Tahun Angkatan Anda");
    }else{
      counter++;
    }
    if(kantin3 == kantinop3){
      alert("Pilih Kantin Anda");
    }else{
      counter++;
    }
    if(bukti3 == ""){
        alert("Masukkan Surat Keterangan Dokter");
    }else{
        counter++;
    }
    if(counter == 6){
      alert("Request anda telah dikirimkan");
    }
  
  }

  function validasi3() {
      var saran1 = document.getElementById("nama3").value;
      var saran2 = document.getElementById("subject").value;
      var saran3 = document.getElementById("saran").value;
      var saran=0;

      if(saran1 == ""){
          alert("Isi Nama Anda");
      }else{
          saran++;
      }
      if(saran2 == ""){
          alert("Isi Subject Anda");
      }else{
          saran++;
      }
      if(saran3 == ""){
          alert("Berikan Saran Anda");
      }else{
          saran++;
      }
      if(saran == 3){
          alert("Terima Kasih atas Saran Anda");
      }
  }