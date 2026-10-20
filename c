<!doctype html>
<html lang="ar" dir="rtl">
<head>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width,initial-scale=1,maximum-scale=1,user-scalable=no">
<title>معدلات التغيّر | واقع معزز</title>
<style>
:root{--navy:#172554;--blue:#087eaa;--gold:#f4b942;--paper:#fffdf5}
*{box-sizing:border-box}body{margin:0;font-family:Tahoma,Arial,sans-serif;background:#f3f6fb;color:#172033}
header{background:linear-gradient(120deg,#172554,#087eaa);color:white;padding:18px 16px;text-align:center}
header h1{margin:0 0 8px;font-size:25px}header p{margin:0;font-size:14px}
main{max-width:900px;margin:auto;padding:14px}
.card{background:white;border-radius:16px;padding:16px;margin:12px 0;box-shadow:0 4px 16px #14213d12}
h2{font-size:19px;color:#172554;margin:0 0 12px}
button{border:0;border-radius:11px;padding:12px 15px;font-size:16px;font-weight:bold;cursor:pointer;background:#087eaa;color:white;margin:4px}
button.secondary{background:#e5eef7;color:#172554}button.gold{background:#f4b942;color:#302000}
#arview{position:relative;width:100%;min-height:280px;background:#111827;border-radius:14px;overflow:hidden}
#arjs{width:100%;height:100%;min-height:280px;display:block}
#status{font-size:14px;padding:10px;background:#eaf5ff;border-radius:10px;margin-top:10px;line-height:1.7}
.grid{display:grid;grid-template-columns:repeat(auto-fit,minmax(220px,1fr));gap:12px}
input{font-size:17px;padding:10px;border:1px solid #b8c6d9;border-radius:9px;width:100%;margin:5px 0}
.result{background:#eefbf4;border-right:5px solid #15945a;padding:12px;border-radius:10px;line-height:1.8}
.small{font-size:13px;color:#526174;line-height:1.8}
label{display:block;font-weight:bold;margin-top:8px}
svg.graph{width:100%;max-height:300px;background:#fffdf5;border:1px solid #e2d9c7;border-radius:12px}
footer{text-align:center;padding:20px;color:#667085;font-size:12px}
</style>
<script src="https://aframe.io/releases/1.4.2/aframe.min.js"></script>
<script src="https://raw.githack.com/AR-js-org/AR.js/3.4.7/aframe/build/aframe-ar.js"></script>
</head>
<body>
<header><h1>معدلات التغيّر</h1><p>الصف الثاني المتوسط • تجربة تعليمية بالواقع المعزز</p></header>
<main>
<section class="card">
<h2>١) شغّل تجربة الواقع المعزز</h2>
<p>اسمح باستخدام الكاميرا، ثم وجّهها نحو علامة <b>HIRO</b> المطبوعة. سيظهر المحور والرسم البياني فوق العلامة.</p>
<div id="arview">
<a-scene embedded arjs="sourceType: webcam; debugUIEnabled: false;" vr-mode-ui="enabled:false" renderer="logarithmicDepthBuffer:true; antialias:true;">
  <a-marker preset="hiro">
    <a-plane position="0 0.02 0" rotation="-90 0 0" width="2.5" height="1.7" color="#fffdf5"></a-plane>
    <a-entity position="0 0.05 0">
      <a-box position="-0.85 0.16 0" width="0.04" height="0.32" depth="0.04" color="#087eaa"></a-box>
      <a-box position="0 0.16 -0.5" width="1.7" height="0.025" depth="0.025" color="#087eaa"></a-box>
      <a-box position="0 0.16 0.5" width="1.7" height="0.025" depth="0.025" color="#087eaa"></a-box>
      <a-box position="-0.55 0.16 0" width="0.025" height="0.025" depth="1" color="#cbd5e1"></a-box>
      <a-box position="-0.1 0.16 0" width="0.025" height="0.025" depth="1" color="#cbd5e1"></a-box>
      <a-box position="0.35 0.16 0" width="0.025" height="0.025" depth="1" color="#cbd5e1"></a-box>
      <a-box position="0.8 0.16 0" width="0.025" height="0.025" depth="1" color="#cbd5e1"></a-box>
      <a-sphere position="-0.65 0.2 0.25" radius="0.07" color="#f59e0b"></a-sphere>
      <a-sphere position="0.65 0.2 -0.25" radius="0.07" color="#f59e0b"></a-sphere>
      <a-entity position="0 0.35 0.68" text="value: معدل التغيّر; align:center; color:#172554; width:3.4"></a-entity>
      <a-entity position="-0.62 0.32 0.28" text="value: البداية; align:center; color:#172554; width:1.4"></a-entity>
      <a-entity position="0.65 0.32 -0.28" text="value: النهاية; align:center; color:#172554; width:1.4"></a-entity>
      <a-entity position="0 0.45 -0.55" text="value: لاحظ اتجاه الخط; align:center; color:#087eaa; width:2.6"></a-entity>
    </a-entity>
  </a-marker>
  <a-entity camera></a-entity>
</a-scene>
</div>
<div id="status">إذا لم تظهر الكاميرا، افتح الملف عبر رابط HTTPS في متصفح Safari أو Chrome، واسمح بإذن الكاميرا. تشغيل الكاميرا لا يعمل عادةً عند فتح ملف HTML محليًا مباشرة.</div>
<div style="margin-top:10px">
<button onclick="window.open('https://raw.githubusercontent.com/AR-js-org/AR.js/master/three.js/data/images/hiro.png','_blank')">افتح علامة HIRO للطباعة</button>
<button class="secondary" onclick="document.getElementById('guide').scrollIntoView({behavior:'smooth'})">طريقة الاستخدام</button>
</div>
</section>
<section class="card">
<h2>٢) استكشف المثال: تكلفة أجهزة الحاسوب</h2>
<div class="grid">
<div><label>التكلفة في البداية (ريال)</label><input id="v1" type="number" value="4500"></div>
<div><label>التكلفة في النهاية (ريال)</label><input id="v2" type="number" value="3500"></div>
<div><label>سنة البداية هـ</label><input id="y1" type="number" value="1434"></div>
<div><label>سنة النهاية هـ</label><input id="y2" type="number" value="1436"></div>
</div>
<button onclick="calc()">احسب معدل التغيّر</button>
<div id="answer" class="result">اضغط «احسب معدل التغيّر» لعرض الحل.</div>
<svg id="plot" class="graph" viewBox="0 0 420 230" role="img" aria-label="رسم بياني للتكلفة"></svg>
</section>
<section class="card">
<h2>٣) تحقق من فهمك</h2>
<p>ارتفع عدد مستخدمي خدمة من ٣٠٠ إلى ٤٢٠ خلال ٤ سنوات. ما معدل التغيّر السنوي؟</p>
<button class="secondary" onclick="document.getElementById('quizans').textContent='معدل التغيّر = (٤٢٠ − ٣٠٠) ÷ ٤ = ٣٠ مستخدمًا في السنة.'">أظهر الحل</button>
<div id="quizans" class="result" style="margin-top:8px">حاول الحل قبل إظهار الإجابة.</div>
</section>
<section class="card" id="guide">
<h2>طريقة الاستخدام في الصف</h2>
<ol style="line-height:2">
<li>اطبع علامة HIRO من الزر أعلاه، واجعل العلامة واضحة وكبيرة.</li>
<li>انشر صفحة هذا الدرس على موقع يدعم HTTPS، ثم افتح الرابط على الآيباد أو الجوال.</li>
<li>اسمح باستخدام الكاميرا ووجّهها إلى علامة HIRO المطبوعة حتى تظهر المجسمات.</li>
<li>ناقش الطلاب: هل الخط صاعد أم هابط؟ وهل معدل التغيّر موجب أم سالب؟</li>
</ol>
<p class="small">ملاحظة تقنية: تجربة الواقع المعزز تعتمد على اتصال الإنترنت لتحميل مكتبات AR.js وA-Frame، وعلى متصفح يدعم الكاميرا. لا تُرفع صور الكاميرا إلى هذا الملف بواسطة كود مخصص؛ تتم المعالجة في المتصفح عبر مكتبة الواقع المعزز.</p>
</section>
</main><footer>إعداد تعليمي قابل للتعديل • معدلات التغيّر • الصف الثاني المتوسط</footer>
<script>
function fmt(n){return new Intl.NumberFormat('ar-SA',{maximumFractionDigits:2}).format(n)}
function calc(){
 let a=Number(document.getElementById('v1').value), b=Number(document.getElementById('v2').value);
 let y=Number(document.getElementById('y1').value), z=Number(document.getElementById('y2').value);
 if(![a,b,y,z].every(Number.isFinite)||z===y){document.getElementById('answer').textContent='تأكد من إدخال القيم، وأن سنة النهاية تختلف عن سنة البداية.';return}
 let r=(b-a)/(z-y), trend=r>0?'موجب؛ الكمية تزداد':r<0?'سالب؛ الكمية تتناقص':'صفر؛ الكمية ثابتة';
 document.getElementById('answer').innerHTML='معدل التغيّر = (التغيّر في التكلفة) ÷ (التغيّر في السنوات)<br> = ('+fmt(b)+' − '+fmt(a)+') ÷ ('+fmt(z)+' − '+fmt(y)+')<br> = <b>'+fmt(r)+' ريال/سنة</b><br>الدلالة: '+trend+'.';
 draw(a,b,y,z);
}
function draw(a,b,y,z){
 const s=document.getElementById('plot'), min=Math.min(a,b)*.85, max=Math.max(a,b)*1.08;
 const Y=v=>190-(v-min)/(max-min||1)*145, X=i=>75+i*270;
 let lines=''; for(let i=0;i<6;i++){let yy=35+i*29;lines+=`<line x1="55" y1="${yy}" x2="365" y2="${yy}" stroke="#d6dbe4"/>`;}
 s.innerHTML=lines+`<line x1="55" y1="30" x2="55" y2="190" stroke="#172554" stroke-width="2"/><line x1="55" y1="190" x2="375" y2="190" stroke="#172554" stroke-width="2"/><polyline points="${X(0)},${Y(a)} ${X(1)},${Y(b)}" fill="none" stroke="#087eaa" stroke-width="4"/><circle cx="${X(0)}" cy="${Y(a)}" r="6" fill="#f59e0b"/><circle cx="${X(1)}" cy="${Y(b)}" r="6" fill="#f59e0b"/><text x="${X(0)}" y="${Y(a)-12}" text-anchor="middle" font-size="12" fill="#172554">${fmt(a)}</text><text x="${X(1)}" y="${Y(b)-12}" text-anchor="middle" font-size="12" fill="#172554">${fmt(b)}</text><text x="${X(0)}" y="212" text-anchor="middle" font-size="12" fill="#172554">${fmt(y)}هـ</text><text x="${X(1)}" y="212" text-anchor="middle" font-size="12" fill="#172554">${fmt(z)}هـ</text><text x="205" y="20" text-anchor="middle" font-size="14" fill="#172554">التكلفة مقابل السنوات</text>`;
}
calc();
</script>
</body></html>