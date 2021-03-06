<?php
/**
 * @file
 * drupalcebu_certificates_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupalcebu_certificates_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'certificates';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Certificates';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Certificates';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Generate the certificates for the events you\'ve participated in.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You didn\'t join any event for you to generate a certificate.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Taxonomy term: User using Participated Events */
  $handler->display->display_options['relationships']['reverse_field_user_participated_events_user']['id'] = 'reverse_field_user_participated_events_user';
  $handler->display->display_options['relationships']['reverse_field_user_participated_events_user']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_user_participated_events_user']['field'] = 'reverse_field_user_participated_events_user';
  $handler->display->display_options['relationships']['reverse_field_user_participated_events_user']['label'] = 'events';
  $handler->display->display_options['relationships']['reverse_field_user_participated_events_user']['required'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = 'Action';
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['text'] = 'Generate Certificate';
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['path'] = 'user/!1/certificates/[tid]';
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Sort criterion: Taxonomy term: Date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_user_participated_events_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'events' => 'events',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user/%/certificates';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Certificates';
  $handler->display->display_options['menu']['description'] = 'List of user\'s available event certificates.';
  $handler->display->display_options['menu']['weight'] = '5';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Cebu Training Craze² */
  $handler = $view->new_display('pdf', 'Cebu Training Craze²', 'pdf_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'pdf_unformatted';
  $handler->display->display_options['row_plugin'] = 'pdf_fields';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_first_name']['id'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['table'] = 'field_data_field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['field'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['relationship'] = 'reverse_field_user_participated_events_user';
  $handler->display->display_options['fields']['field_user_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_first_name']['element_label_colon'] = FALSE;
  /* Field: User: Suffix */
  $handler->display->display_options['fields']['field_user_suffix']['id'] = 'field_user_suffix';
  $handler->display->display_options['fields']['field_user_suffix']['table'] = 'field_data_field_user_suffix';
  $handler->display->display_options['fields']['field_user_suffix']['field'] = 'field_user_suffix';
  $handler->display->display_options['fields']['field_user_suffix']['relationship'] = 'reverse_field_user_participated_events_user';
  $handler->display->display_options['fields']['field_user_suffix']['label'] = '';
  $handler->display->display_options['fields']['field_user_suffix']['element_label_colon'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_user_last_name']['id'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['table'] = 'field_data_field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['field'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['relationship'] = 'reverse_field_user_participated_events_user';
  $handler->display->display_options['fields']['field_user_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_last_name']['alter']['text'] = '[field_user_first_name] [field_user_last_name] [field_user_suffix]';
  $handler->display->display_options['fields']['field_user_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_user_participated_events_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'events' => 'events',
  );
  /* Filter criterion: Taxonomy term: Term ID */
  $handler->display->display_options['filters']['tid_raw']['id'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_raw']['field'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['value']['value'] = '3';
  $handler->display->display_options['path'] = 'user/%/certificates/3';
  $handler->display->display_options['default_page_format'] = 'LETTER';
  $handler->display->display_options['default_page_orientation'] = 'L';
  $handler->display->display_options['margin_left'] = '145';
  $handler->display->display_options['margin_top'] = '52';
  $handler->display->display_options['leading_template'] = '0';
  $handler->display->display_options['template'] = 'certificate_template.pdf';
  $handler->display->display_options['succeed_template'] = '0';
  $handler->display->display_options['default_font_style'] = array(
    'b' => 'b',
    'i' => 0,
    'u' => 0,
    'd' => 0,
    'o' => 0,
  );
  $handler->display->display_options['default_font_size'] = '30';
  $handler->display->display_options['default_text_align'] = 'C';
  $handler->display->display_options['default_font_color'] = '1B5A8F';
  $export['certificates'] = $view;

  return $export;
}
