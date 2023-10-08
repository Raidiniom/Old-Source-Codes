function Registration()
{
    var username = document.getElementById('username');
    var password = document.getElementById('password');

    localStorage.setItem('username',username.value);
    localStorage.setItem('password',password.value);

    alert('You have registered to the site!!!!');
}

function Login()
{
    var Registeredusername = localStorage.setItem('username');
    var Registeredpassword = localStorage.setItem('password');

    var Inputusername = document.getElementById('username');
    var Inputpassword =  document.getElementById('password');

    if(Inputusername.value == Registeredusername && Inputpassword.value == Registeredpassword)
    {
        alert('You have logged!');

        return 0;
    }
    else
    {
        alert('Incorrect Username and Password');
    }
}