<?php

function workbench_access_context_views_data_alter(&$data) {
  $data['workbench_access']['access_id']['argument'] = array(
    'handler' => 'workbench_access_context_handler_argument_access',
  );
}
