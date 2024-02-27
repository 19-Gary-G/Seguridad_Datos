# **15 Febrero 2024**
---
* APP
    * SQL server
    * insert, update, select
        * HA <-->
        * Cluster
---
* Open LDAP
* [Keepass](https://keepass.info/)
* Password manager
* ISS [Integrated Security System](https://www.firstsecurity.co.nz/blog/what-is-integrated-security/#:~:text=An%20'integrated%20security%20system'%2C,video%20surveillance%20and%20intruder%20detection.)
* Shoulder surfing
* Dumpster diving 
* Spear Whale
---
## Entropia (contraseña)
1. A-Z
2. 0-9
3. a-z
4. #!_$-%
5. longitud
6. History Max 5
--- 
* Diccionario
* Fuerza bruta 
    * Numero de intentos 
    * failzban
---
## Cygwin
* emula --> wsl
* c:/cygwin64
    * bin 
    * usr
    * etc
    * var
    * home/txttr/.ssh

![cygmin terminal](https://media.geeksforgeeks.org/wp-content/uploads/20210925095856/Article3.jpg)

* windows 10 
* c:/users/txttr/.ssh  

![windows 10 terminal](https://www.freecodecamp.org/news/content/images/2022/08/ss11.png)

* git bash

![gitbash terminal](https://i.stack.imgur.com/eetUe.png)

---

[Unix Basic Commands](https://mally.stanford.edu/~sr/computing/basic-unix.html)

## Pentesting (Whitebox, Blackbox, Graybox)(internas, externas)

1. Reconocimiento
    * (Footprinting, [shodan](https://www.shodan.io/), [Scraping](https://www.geeksforgeeks.org/python-web-scraping-tutorial/) [Crawlers](https://www.geeksforgeeks.org/what-is-a-webcrawler-and-where-is-it-used/))
        * index.php, index.html
2. Escaneo 
    * nmap , netstat
        * 2 MAC
        * 3 IP
        * 4 Ports 
            * TCP-UDP
                * Header
                    * Source port(16 bits) 2^16= 0-65536
                * Header 
                    * Destination port(16 bits) 0-1024
                * *http  80*, *ssh 22*, *ftp 21*, *smb 445*, *https 443*, *mysql 3306*, *mssql 1433*, *tomcat 8080*     
        * 5 URL
            * @,filesystem, path
3. Ganar acceso
4. Mantener acceso
5. Cubrir huellas