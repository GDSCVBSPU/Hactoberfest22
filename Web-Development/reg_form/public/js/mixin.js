// $(document).ready(()=>{
//     console.log(JSON.parse(localStorage.getItem("result")));
// })

$("#nextButton").click((event)=>{
    const gender=$(".gender").val();
    const address=$(".address").val().trim();
    let data=JSON.parse(localStorage.getItem("result"));
    const {email,phoneNo,name,countryId}=data;
    $.post('/login',{email,name,phoneNo,address,gender,countryId},(result)=>{
        console.log(result);
        window.location.href="preview.html";
    });

})