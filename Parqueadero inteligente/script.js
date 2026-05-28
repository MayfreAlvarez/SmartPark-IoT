const lineChart = new Chart(
    document.getElementById('lineChart'),
    {
        type:'line',
        data:{
            labels:['8AM','9AM','10AM','11AM','12PM','1PM'],
            datasets:[{
                label:'Vehículos',
                data:[12,19,10,25,22,30],
                borderColor:'#8b5cf6',
                backgroundColor:'#8b5cf6'
            }]
        }
    }
);

const pieChart = new Chart(
    document.getElementById('pieChart'),
    {
        type:'doughnut',
        data:{
            labels:['Disponibles','Ocupados'],
            datasets:[{
                data:[28,22],
                backgroundColor:[
                    '#16a34a',
                    '#dc2626'
                ]
            }]
        }
    }
);

setInterval(()=>{

    let disponibles=Math.floor(Math.random()*50);

    let ocupados=50-disponibles;

    document.getElementById("disponibles").innerHTML=disponibles;

    document.getElementById("ocupados").innerHTML=ocupados;

},2000);