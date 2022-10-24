$(document).ready((event)=>{
    const email=JSON.parse(localStorage.getItem("result")).email;
    console.log(email);
    $.get(`/login/${email}`,(data)=>{
        $(".email").val(data.email);
        $(".name").val(data.name);
        $(".phoneNo").val(`+${data.countryId} ${data.phoneNo}`);
        $(".gender").val(data.gender);
        $(".address").val(data.address);
    })
})

$("#submitButton").click(()=>{
    alert("form submited successfully.....");
    window.location.href="index.html";

})