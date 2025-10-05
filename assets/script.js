// Animação de movimento ao rolar
window.addEventListener('scroll', function() {
  document.querySelectorAll('main section').forEach(function(section) {
    const rect = section.getBoundingClientRect();
    if (rect.top < window.innerHeight - 60) {
      section.classList.add('visible');
    }
  });
});
// Exibe as seções ao carregar
window.addEventListener('DOMContentLoaded', function() {
  document.querySelectorAll('main section').forEach(function(section, i) {
    setTimeout(() => section.classList.add('visible'), 400 + i * 200);
  });
});
