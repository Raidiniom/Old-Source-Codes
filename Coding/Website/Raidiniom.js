function register()
{
    var username = document.getElementById('username');
    var password = document.getElementById('password');
    var level = document.getElementById('level');

    if(level.value == 1 || level.value == 2 || level.value == 3)
    {
        if(password.value != repeatpassword.value)
        {
            alert('Password must Match. Try Again!');
        }
        else
        {
            localStorage.setItem('username', username.value);
            localStorage.setItem('password', password.value);
            localStorage.setItem('level', level.value);

            alert('Account alreadt Entered!');
            window.location = "RaidiniomLogin.html"
        }
    }
    else
    {
        alert('-Select Access Level-');
    }
}

function login()
{
    var registeredusername = localStorage.getItem('username');
    var registeredpassword = localStorage.getItem('password');
    var registeredlevel = localStorage.getItem('level');

    var loginusername = document.getElementById('loginuser');
    var loginpassword = document.getElementById('loginpass');

    let CMS;
    if(selectedlevel == 1)
    {
        CMS = 'Costumer';
    }
    else if(selectedlevel == 2)
    {
        CMS = 'Admin';
    }
    else if(selectedlevel == 3)
    {
        CMS = 'Programer';
    }

    if(loginusername.value == registeredusername && loginpassword.value == registeredpassword)
    {
        alert('Successfully logged in!');
        if(selectedlevel == 1)
        {
            window.location = "RaidiniomLogin.html";
            return false;
        }
        else if(selectedlevel == 2 || selectedlevel == 3)
        {
            window.location = "RaidiniomAdmin.html";
            return false;
        }
    }
    else
    {
        alert('Incorrect Username / Password');
    }
}

function signout()
{
    localStorage.clear();
    alert('You have Signed Out!');
}