import numpy as np


class FeedForwardNetwork:
    def __init__(self, input_dim, output_dim, num_hidden_layers, num_of_nodes):
        self.input_dim = input_dim
        self.output_dim = output_dim
        self.num_hidden_layers = num_hidden_layers
        self.num_of_nodes = num_of_nodes
        self.init_weights()

    def init_weights(self):
        self.weights = np.random.normal(size=(self.input_dim, self.num_of_nodes, self.num_hidden_layers))
        self.bias = np.random.normal(size=(self.num_of_nodes, self.num_hidden_layers))

    def forward(self, input):
        forward_input = input
        for i in range(self.num_hidden_layers):
            print(f'Processing layer {i}')
            layer_weights = self.weights[:, :, i]
            layer_bias = self.bias[:, i]
            forward_input = np.dot(layer_weights, forward_input) + layer_bias




if __name__ == '__main__':
    input = np.random.normal(size=(5,1))
    ffnn = FeedForwardNetwork(input.shape[0], 1, 2, 5)

    ffnn.forward(input)


