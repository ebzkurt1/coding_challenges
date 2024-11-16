import numpy as np


class FeedForwardNetwork:
    def __init__(self, input_dim, output_dim, num_hidden_layers, num_of_nodes):
        self.input_dim = input_dim
        self.output_dim = output_dim
        self.num_hidden_layers = num_hidden_layers
        self.num_of_nodes = num_of_nodes
        self.init_weights()

    def init_weights(self):
        self.weights = {}
        self.weights[0] = np.random.normal(size=(self.input_dim, self.num_of_nodes, 1))
        self.weights[1] = np.random.normal(size=(self.num_of_nodes, self.num_of_nodes, self.num_hidden_layers))
        self.weights[2] = np.random.normal(size=(self.num_of_nodes, self.output_dim, 1))

        self.bias = {}
        self.bias[0] = np.random.normal(size=(self.num_of_nodes, 1))
        self.bias[1] = np.random.normal(size=(self.num_of_nodes, self.num_hidden_layers))
        self.bias[2] = np.random.normal(size=(self.output_dim, 1))
        
    def forward(self, input):
        forward_input = input
        for i in range(self.num_hidden_layers):
            w_key = 0 if i == 0 else (2 if i == self.num_hidden_layers - 1 else 1)




if __name__ == '__main__':
    input = np.random.normal(size=(5,1))
    ffnn = FeedForwardNetwork(input.shape[0], 1, 7, 10)

    ffnn.forward(input)


