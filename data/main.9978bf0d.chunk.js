(this["webpackJsonpmy-setup-app"]=this["webpackJsonpmy-setup-app"]||[]).push([[0],{44:function(e,n,t){"use strict";t.r(n);var a=t(16),c=t.n(a),r=(t(7),t(2)),i=t(6),s=t.n(i),o=t(17),u=t(18),p=t(5),d=t.n(p),m=function(e,n){var t="".concat(e," ").concat(n);return d.a.post("/LED",t,{headers:{"Content-Type":"text/plain",charset:"utf-8"}})},h=t(0),j=function(e){var n=e.name,t=Object(r.useState)(0),a=Object(u.a)(t,2),c=a[0],i=a[1];return Object(r.useEffect)((function(){function e(){return(e=Object(o.a)(s.a.mark((function e(n,t){var a;return s.a.wrap((function(e){for(;;)switch(e.prev=e.next){case 0:return e.next=2,m(n,t);case 2:return a=e.sent,e.abrupt("return",a);case 4:case"end":return e.stop()}}),e)})))).apply(this,arguments)}!function(n,t){e.apply(this,arguments)}(n,c.toString())}),[c]),Object(h.jsxs)(h.Fragment,{children:[Object(h.jsx)("div",{className:n,style:{position:"relative",height:"15px",width:"90%",marginTop:"25px"},children:Object(h.jsx)("input",{type:"range",min:"0",max:"255",onChange:function(){!function(){var e=document.querySelector(".".concat(n," #myRange"));i(e.value)}()},value:c,className:"slider",id:"myRange",name:"status"})}),Object(h.jsx)("p",{className:"value",children:c})]})},l=function(e){var n=e.name;return Object(h.jsx)("div",{className:"sliders-container",children:["Red","Green","Blue"].map((function(e){return Object(h.jsx)(j,{name:"".concat(n,"-").concat(e)},e)}))})},f=t.p+"static/media/loading.fb8848c2.svg",b=function(e){var n=e.name,t=e.width,a=void 0===t?"10":t,c=e.height,r=void 0===c?"10":c;return[{icon:Object(h.jsx)("img",{src:f,width:a,height:r}),name:"loadingicon"}].find((function(e){return e.name===n})).icon};var v=function(){return Object(h.jsxs)("div",{className:"app",children:[Object(h.jsx)(l,{name:"rgb1"}),Object(h.jsx)(b,{name:"loadingicon",width:"50",height:"50"})]})};c.a.render(Object(h.jsx)(v,{}),document.getElementById("root"))},7:function(e,n,t){}},[[44,1,2]]]);
//# sourceMappingURL=main.9978bf0d.chunk.js.map