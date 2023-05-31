function Login()  
{
  var username = document.getElementById("username").value;
  var password = document.getElementById("password").value;

  if (username == "mahasiswa" && password == "mahasiswa")
        {
          alert("Anda sukses Login sebagai Mahasiswa");
          window.location.href = "assets/web/index.html";
        }

        else if (username == "parkantin" && password == "parkantin")
        {
          alert("Anda sukses Login sebagai Pihak Kantin");
          window.location.href = "assets/web/index.html";
        }

        else if (username == "dosen" && password == "dosen")
        {
          alert("Anda sukses Login sebagai Dosen");
          window.location.href = "assets/web/index.html";
        }

        else if (username == "dep_ketertiban" && password == "dep_ketertiban")
        {
          alert("Anda sukses Login sebagai Departemen  Ketertiban");
          window.location.href = "assets/web/index.html";
        }

        else if (username == "asrama" && password == "asrama")
        {
          alert("Anda sukses Login sebagai Pihak Keasramaan");
          window.location.href = "assets/web/index.html";
        }
        else
        {
          alert("Username atau password anda masih salah");
        } 
}
