let result;
// $(document).ready((event)=>{
//     $.get('/login',(data)=>{
//         console.log(data);
//     });
// });

$("#nextButton").click((event)=>{
    const email=$("#email1").val();
    const phoneNo=$("#tel1").val();
    const countryId=$("#countryCode").val();
    const name=$("#name1").val();
    console.log(email,phoneNo,name,countryId);
    if(!email||!phoneNo||!name)
    {
      alert("empty field not  allowed...");
    window.location.reload();
    return;
  }
    result={email,name,phoneNo,countryId};
   localStorage.setItem("result",JSON.stringify(result));
   window.location.href="moredetail.html"; 
})

