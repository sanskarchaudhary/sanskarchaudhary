/*setTimeout(myFunction, 10000); 

function myFunction() {
  document.getElementById("demo").innerHTML = "HELLO WORLD";
  myFunction();
}

function digiClock(){
    let div = document.getElementById('div1');
    let clk = new Date();

    div.innerHTML = clk.getHours() + ":" + clk.getMinutes() + ":" + clk.getSeconds();

}

setInterval(digiClock, 1000);*/
/* how can we fatch the data 
fatching the data from the apis or text files
XRH - XML http request



agex is a combination of the technologies javascript xml


promise 
callback hell -- loop in call back

there can be three state in promise
they are:-
pending state
fullfilled state
rejected state
*/

// let myPromise = new Promise((resolved,rejected)=>{
//     let req = new XMLHttpRequest();
//     req.open('GET','user.txt');
//     req.onload=function(){
//         if(req.status==200){
//             resolved(req.responseText);
//         }
//         else{
//             rejected(req.status);
//         }
       
//     }
//     req.send();
// })

//  myPromise
// .then((response)=>{console.log(response);})
// .catch((err)=>{console.log(err);})
/*

function display(value){
    console.log(value);
}
function getData(callback){
    let req = new XMLHttpRequest();
    req.open('GET','user.txt');
    req.onload=function(){
        if(req.status===200){
            callback(req.responseText);
        }
        else{
            callback("File not Found...");
        }
    }
}
req.send();
getData(display);
*/

//fatch returns us a promise 

// document.addEventListener("DOMContentLoaded", function () {
//     // Fetch data from a remote source (e.g., an API)
// const api="https://jsonplaceholder.typicode.com/users";

//     fetch("api")
//         .then((response) => response.json())
//         .then(data => console.log(data))
//         // .then((data) => {
//         //     const table = document.getElementById("data-table");

//         //     data.forEach((item) => {
//         //         const row = table.insertRow();
//         //         const cell1 = row.insertCell(0);
//         //         const cell2 = row.insertCell(1);

//         //         // Fill the cells with data from the API response
//         //         cell1.innerHTML = item.column1;
//         //         cell2.innerHTML = item.column2;
//         //     });
//         // })
//         // .catch((error) => {
//         //     console.error("Error fetching data:", error);
//         // });
// });





// // api url
// const api_url = 
//       "https://jsonplaceholder.typicode.com/users";
 
// // Defining async function
// async function getapi(url) {
   
//     // Storing response
//     const response = await fetch(url);
   
//     // Storing data in form of JSON
//     var data = await response.json();
//     console.log(data);
//     if (response) {
//         hideloader();
//     }
//    show(data);
// }
// // Calling that async function
// getapi(api_url);
 
// // Function to hide the loader
// function hideloader() {
//     document.getElementById('loading').style.display = 'none';
// }
// // Function to define innerHTML for HTML table
// function show(data) {
//     let tab = 
//         `<tr>
//           <th>Name</th>
//           <th>Office</th>
//           <th>Position</th>
//           <th>Salary</th>
//          </tr>`;
   
//     // Loop to access all rows 
//     for (let r of data.list) {
//         tab += `<tr> 
//     <td>${r.name} </td>
//     <td>${r.office}</td>
//     <td>${r.position}</td> 
//     <td>${r.salary}</td>          
// </tr>`;
//     }
//     // Setting innerHTML as tab variable
//     document.getElementById("employees").innerHTML = tab;
// }



// const fs = require('fs');

// fs.readdir('temp',(err,data)=>{
//     if(err) {console.log(err);}
//   else 
//     {
//       const retrivedData = data;

//       retrivedData.forEach((file)=>{
//         console.log(file);
        
//         fs.lstat(file, (err, stats) => {
//           if (err) {
//             return console.error('err found while finding');
//           }
//           console.log(`Is file: ${stats.isFile()}`);
//           console.log(`Is directory: ${stats.isDirectory()}`);
//         });
        
//       })
//     }
// })
