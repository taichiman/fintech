<?php
/**
 * Implementation of hook_views_data()
 */

function fi_export_import_CSV_views_data() {
  
  $data['uc_products']['length'] = array(
    'title' => t('Ship Length'),
    'help' => t('Ship Length.'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
  );

  $data['uc_products']['width'] = array(
    'title' => t('Ship Width'),
    'help' => t('Ship Width.'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
  );

  $data['uc_products']['height'] = array(
    'title' => t('Ship Height'),
    'help' => t('Ship Height.'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
  );

  $data['uc_products']['pkg_qty'] = array(
    'title' => t('product quantity'),
    'help' => t('product quantity.'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
  );

  return $data;

}
