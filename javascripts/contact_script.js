function main() {
  $('.table').hide();
  $('.contact_info').hide();
  $(document).on('click', function() {
    $('.knock').fadeOut(500);
    $('.table').delay(1000).fadeIn(1000);
    $('.contact_info').delay(2000).fadeIn(1000);
  });
}

$(document).ready(main);
