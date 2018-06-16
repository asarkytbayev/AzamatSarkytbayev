function main() {
  alert("Here's an annoying alert! Haha");
  $('.cproject').hide();
  $('.ccode-button').on('click', function() {
    $(this).toggleClass('active');
    if ($(this).text() === 'Show C Code') {
      $(this).text('Viewing C Code');
      $('.cproject').fadeIn(1000);
    }
    else {
      $(this).text('Show C Code');
      $('.cproject').fadeOut(1000);
    };
  });
}
$(document).ready(main);
