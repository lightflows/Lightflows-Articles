<?php

/**
 * Implementation of hook_conditional_fields_default_fields().
 */
function articles_features_conditional_fields_default_fields() {
$items = array();
$items[] = array (
  'control_field_name' => 'field_display_video',
  'field_name' => 'field_video',
  'type' => 'article',
  'trigger_values' => 
  array (
    1 => '1',
  ),
);
$items[] = array (
  'control_field_name' => 'field_display_image',
  'field_name' => 'field_article_image',
  'type' => 'article',
  'trigger_values' => 
  array (
    1 => '1',
  ),
);
$items[] = array (
  'control_field_name' => 'field_display_gallery',
  'field_name' => 'field_image_gallery',
  'type' => 'article',
  'trigger_values' => 
  array (
    1 => '1',
  ),
);
return $items;
}
