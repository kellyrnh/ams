// $Id

Drupal.behaviors.skyBehavior = function (context) {
  /**
   * Superfish Menus
   * http://users.tpg.com.au/j_birch/plugins/superfish/
   * @see js/superfish.js
   */
  jQuery('#navigation ul').superfish({
    animation:{ opacity:'show', height:'show' },
    easing:'swing',
    speed:250,
    autoArrows:false,
    dropShadows:false /* Needed for IE */
  });

};

//http://stackoverflow.com/questions/4054211/jquery-hide-show-list-items-after-nth-item
Drupal.behaviors.miscJS = function (context) {

  var index = 2;
  $('#people-pages .tweets-pulled-listing ul li:gt(' + index + ')').hide();
  $('#people-pages .tweets-pulled-listing ul').append('<li class="more"><h3><a href="#">More Tweets...</a></h3></li>');
  $('#people-pages .tweets-pulled-listing ul li.more a').toggle(showItems, hideItems);

  function showItems() {
    $(this).text('Less Tweets...');
    $('#people-pages .tweets-pulled-listing ul li:gt(' + index + ')').show();
  }

  function hideItems() {
    $(this).text('More Tweets...');
    $('#people-pages .tweets-pulled-listing ul li:gt(' + index + '):not(.more)').hide();
  }

  $("#constant-contact-signup-form .form-checkboxes .form-item", context).each(function (i) {
    $(this).addClass("cbx-" + i);
  });

  $("#constant-contact-signup-form .form-item.cbx-0 .form-checkbox ", context).attr("checked", "checked");

  $(".cbx-3").insertBefore(".cbx-1");

  $('#constant-contact-signup-form .form-checkboxes .form-item:gt(3)').hide();

  // get equal heights of elements within uls
  $(".giving-page ul.views-row").each(function () {
    $(this).find('div.views-field-field-giving-logo-fid').equalHeights(50, 400);
  });

  $(".giving-page ul.views-row").each(function () {
    $(this).find('.cat-group h3').equalHeights(30, 70);
  });

    $(".prnews .views-row").each(function () {
    $(this).find('div.eqhts').equalHeights();
  });

  $(".giving-page ul.views-row").each(function () {
    $(this).find('.views-field-giving-description .field-content').equalHeights(60, 200);
  });

  // use the function to get tallest LI and apply to parent UL tag
  function thisHeight(){
    return $(this).height();
  }

  $("ul.views-row").height(function() {
    return Math.max.apply(Math, $(this).find("li").map(thisHeight));
  });

  // change the default text
  $(".giving-form-page label[for='edit-title']").each(function () {
    var s = $(this).text(); // get text
    $(this).text(s.replace('Title', 'Organization’s Name'));
  });

  $(".nodeblock.node.services-graphics-links.four:first-child .nodeblock.content-area li").each(function (i) {
    $(this).addClass("item-list-" + i);
});

  $(".nodeblock.node.services-graphics-links.five:first-child .nodeblock.content-area li").each(function (i) {
    $(this).addClass("item-list-" + i);
  });

  $(".nodeblock.content-area li:visible:nth-child(even)").addClass("even");
  $(".nodeblock.content-area li:visible:nth-child(odd)").addClass("odd");

  if($().flexslider) {
    $('.view-display-id-flexslider_block .view-content').flexslider({
        controlsContainer: ".view-display-id-flexslider_controls",
        controlNav: true,
        initDelay: 0,
        manualControls: '.custom-controls li a'
    });
  }

  if ($('div.node').hasClass("industries-left-bg")) {
    $('body').addClass('industries-left-bg-page');
  }

};
