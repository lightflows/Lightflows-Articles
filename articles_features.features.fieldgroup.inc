<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function articles_features_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_display_controls
  $groups['article-group_display_controls'] = array(
    'group_type' => 'standard',
    'type_name' => 'article',
    'group_name' => 'group_display_controls',
    'label' => 'Display controls',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => 'Choose which elements are displayed on the page',
      ),
      'display' => array(
        'weight' => '-3',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'email_plain' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'email_html' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-3',
    'fields' => array(
      '0' => 'field_display_image',
      '1' => 'field_display_video',
      '2' => 'field_display_gallery',
    ),
  );

  // Exported group: group_gallery
  $groups['article-group_gallery'] = array(
    'group_type' => 'standard',
    'type_name' => 'article',
    'group_name' => 'group_gallery',
    'label' => 'Gallery',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => 'Add images to your gallery here - make sure you have switched the gallery on in the display settings tab above.',
      ),
      'display' => array(
        'weight' => '5',
        'label' => 'above',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'simple',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'email_plain' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'email_html' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '5',
    'fields' => array(
      '0' => 'field_image_gallery',
    ),
  );

  // Exported group: group_related_articles_group
  $groups['article-group_related_articles_group'] = array(
    'group_type' => 'standard',
    'type_name' => 'article',
    'group_name' => 'group_related_articles_group',
    'label' => 'Related articles',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '7',
        'label' => 'above',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'simple',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'description' => '',
        'email_plain' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'email_html' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '7',
    'fields' => array(
      '0' => 'field_related_articles',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Display controls');
  t('Gallery');
  t('Related articles');

  return $groups;
}
