/* general notes

1) be sure to use the syntax:
    $('.foo' ,context).function rather than $('.foo').function
    note ',context' does not work for .ui-dialog

2) and add in:
  if (jQuery().function) {
  --without this you can get IE errors sometimes

*/

//replace the case study image with a bg for better theming
//adapted from: http://stackoverflow.com/questions/4033839/turn-image-src-into-background-image-in-jquery

/*
Drupal.behaviors.oe_ReplaceBG = function (context) {
  if (jQuery().replaceWith) {

$("#case-studies-viewdisplay img.imagecache-CaseStudy_View", context).each(function(i, elem) {
  var img = $(elem);
  var div = $("<div class = 'cs-view-image' />").css({
    background: "url(" + img.attr("src") + ") no-repeat",
    width: img.width() + "px",
    height: img.height() + "px"
  });
  img.replaceWith(div);
});

}
}

*/

/*
//simple addclass function if needed

Drupal.behaviors.oe_AddClasses = function (context) {
if (jQuery().addClass) {
$(".news-updates .view-prc-news-articles .view-content ul li",context).addClass("clearfix"); 

    }
  }
  
  */