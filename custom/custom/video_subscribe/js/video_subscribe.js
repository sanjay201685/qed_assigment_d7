(function ($) {

  Drupal.behaviors.form_alter = {
    attach: function (context) {
	  $('#subscribeVideo').on('click', function(){
	  	var nid = $(this).attr('nid');
	  	var url = Drupal.settings.basePath + 'subscription_update_table/' + nid;  
    	$.ajax({'url': url , success: function(result){
          if (result == 'Subscribe Successfully.') {
          	$('#success_msg_' + nid).html(result);
          	$('.subs_but_' + nid).hide(result);
          	$('.read_more_' + nid).show(result);
          }
          else {
            $('#success_msg_' + nid).html(result);	
          }
    	}});
	  });
    }
  }
})(jQuery);
